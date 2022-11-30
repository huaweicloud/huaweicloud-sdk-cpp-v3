
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_InsertPublicipInfo_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_InsertPublicipInfo_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 共享带宽插入/移除弹性公网IP的publicip_info字段
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  InsertPublicipInfo
    : public ModelBase
{
public:
    InsertPublicipInfo();
    virtual ~InsertPublicipInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// InsertPublicipInfo members

    /// <summary>
    /// 功能说明：若publicip_id为弹性公网IP的id，则该字段可自动忽略。若publicip_id为IPv6端口PORT的id，则该字段必填：5_dualStack(目前仅北京4局点支持)
    /// </summary>

    std::string getPublicipType() const;
    bool publicipTypeIsSet() const;
    void unsetpublicipType();
    void setPublicipType(const std::string& value);

    /// <summary>
    /// 功能说明：带宽对应的弹性公网IP或IPv6端口PORT的唯一标识
    /// </summary>

    std::string getPublicipId() const;
    bool publicipIdIsSet() const;
    void unsetpublicipId();
    void setPublicipId(const std::string& value);


protected:
    std::string publicipType_;
    bool publicipTypeIsSet_;
    std::string publicipId_;
    bool publicipIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_InsertPublicipInfo_H_
