
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_VoiceList_result_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_VoiceList_result_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/VoiceList_result_voices.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 注册成功的声音列表，调用失败时无此字段。
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  VoiceList_result
    : public ModelBase
{
public:
    VoiceList_result();
    virtual ~VoiceList_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VoiceList_result members

    /// <summary>
    /// 声色列表
    /// </summary>

    std::vector<VoiceList_result_voices>& getVoices();
    bool voicesIsSet() const;
    void unsetvoices();
    void setVoices(const std::vector<VoiceList_result_voices>& value);


protected:
    std::vector<VoiceList_result_voices> voices_;
    bool voicesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_VoiceList_result_H_
