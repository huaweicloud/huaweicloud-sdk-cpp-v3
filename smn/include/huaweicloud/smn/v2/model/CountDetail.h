
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_CountDetail_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_CountDetail_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  CountDetail
    : public ModelBase
{
public:
    CountDetail();
    virtual ~CountDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountDetail members

    /// <summary>
    /// 短信发送数量
    /// </summary>

    int32_t getSms() const;
    bool smsIsSet() const;
    void unsetsms();
    void setSms(int32_t value);


protected:
    int32_t sms_;
    bool smsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_CountDetail_H_
