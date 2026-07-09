
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResourceEnvironment_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResourceEnvironment_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ResourceEnvironment
    : public ModelBase
{
public:
    ResourceEnvironment();
    virtual ~ResourceEnvironment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceEnvironment members

    /// <summary>
    /// 账户ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 企业项目ID
    /// </summary>

    std::string getEpId() const;
    bool epIdIsSet() const;
    void unsetepId();
    void setEpId(const std::string& value);

    /// <summary>
    /// 企业项目名称
    /// </summary>

    std::string getEpName() const;
    bool epNameIsSet() const;
    void unsetepName();
    void setEpName(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// regionID
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string epId_;
    bool epIdIsSet_;
    std::string epName_;
    bool epNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ResourceEnvironment_H_
