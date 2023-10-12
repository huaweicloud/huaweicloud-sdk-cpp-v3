
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_VersionResult_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_VersionResult_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronPageLink.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  VersionResult
    : public ModelBase
{
public:
    VersionResult();
    virtual ~VersionResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VersionResult members

    /// <summary>
    /// API版本的状态：  - CURRENT（当前版本）  - STABLE（稳定版本）  - DEPRECATED（废弃版本）
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// API版本
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 链接列表
    /// </summary>

    std::vector<NeutronPageLink>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<NeutronPageLink>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<NeutronPageLink> links_;
    bool linksIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_VersionResult_H_
