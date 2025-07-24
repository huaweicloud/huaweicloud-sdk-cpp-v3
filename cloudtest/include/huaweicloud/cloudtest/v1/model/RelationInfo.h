
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RelationInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RelationInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  RelationInfo
    : public ModelBase
{
public:
    RelationInfo();
    virtual ~RelationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RelationInfo members

    /// <summary>
    /// 需求id
    /// </summary>

    std::string getDrNumber() const;
    bool drNumberIsSet() const;
    void unsetdrNumber();
    void setDrNumber(const std::string& value);

    /// <summary>
    /// 用例uri
    /// </summary>

    std::string getTestCaseUri() const;
    bool testCaseUriIsSet() const;
    void unsettestCaseUri();
    void setTestCaseUri(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getRelateType() const;
    bool relateTypeIsSet() const;
    void unsetrelateType();
    void setRelateType(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 来源系统
    /// </summary>

    std::string getSourceSystem() const;
    bool sourceSystemIsSet() const;
    void unsetsourceSystem();
    void setSourceSystem(const std::string& value);

    /// <summary>
    /// 关联资源编号
    /// </summary>

    std::string getAssociationNumber() const;
    bool associationNumberIsSet() const;
    void unsetassociationNumber();
    void setAssociationNumber(const std::string& value);

    /// <summary>
    /// 逻辑region，外部使用公有云实际区域，内部使用默认值
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);


protected:
    std::string drNumber_;
    bool drNumberIsSet_;
    std::string testCaseUri_;
    bool testCaseUriIsSet_;
    std::string relateType_;
    bool relateTypeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string sourceSystem_;
    bool sourceSystemIsSet_;
    std::string associationNumber_;
    bool associationNumberIsSet_;
    std::string region_;
    bool regionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_RelationInfo_H_
