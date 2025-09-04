
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyStarRocksSecurityGroupReq_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyStarRocksSecurityGroupReq_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ModifyStarRocksSecurityGroupReq
    : public ModelBase
{
public:
    ModifyStarRocksSecurityGroupReq();
    virtual ~ModifyStarRocksSecurityGroupReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyStarRocksSecurityGroupReq members

    /// <summary>
    /// 安全组ID。如果实例所选用的子网开启网络ACL进行访问控制，则该参数非必选。如果未开启ACL进行访问控制，则该参数必选。获取方法如下：  方法1：登录虚拟私有云服务的控制台界面，在安全组的详情页面查找安全组ID。  方法2：通过虚拟私有云服务的API接口查询，具体操作可参考查询安全组列表。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);


protected:
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyStarRocksSecurityGroupReq_H_
