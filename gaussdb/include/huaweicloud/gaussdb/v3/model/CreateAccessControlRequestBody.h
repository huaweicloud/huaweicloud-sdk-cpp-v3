
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateAccessControlRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateAccessControlRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/AccessControlRule.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateAccessControlRequestBody
    : public ModelBase
{
public:
    CreateAccessControlRequestBody();
    virtual ~CreateAccessControlRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAccessControlRequestBody members

    /// <summary>
    /// 访问控制方式。 取值： - white：表示白名单。 - black：表示黑名单。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 控制访问的IP地址数组，最多可添加300个IP地址或网段。
    /// </summary>

    std::vector<AccessControlRule>& getIpList();
    bool ipListIsSet() const;
    void unsetipList();
    void setIpList(const std::vector<AccessControlRule>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::vector<AccessControlRule> ipList_;
    bool ipListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateAccessControlRequestBody_H_
