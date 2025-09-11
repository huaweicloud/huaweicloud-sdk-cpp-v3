
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_PublicIp_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_PublicIp_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/EIP.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 弹性IP
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  PublicIp
    : public ModelBase
{
public:
    PublicIp();
    virtual ~PublicIp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublicIp members

    /// <summary>
    /// 
    /// </summary>

    EIP getEip() const;
    bool eipIsSet() const;
    void unseteip();
    void setEip(const EIP& value);

    /// <summary>
    /// IP地址ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    EIP eip_;
    bool eipIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_PublicIp_H_
