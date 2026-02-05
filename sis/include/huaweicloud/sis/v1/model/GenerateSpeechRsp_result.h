
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_GenerateSpeechRsp_result_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_GenerateSpeechRsp_result_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 调用成功表示识别结果，调用失败时无此字段。
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  GenerateSpeechRsp_result
    : public ModelBase
{
public:
    GenerateSpeechRsp_result();
    virtual ~GenerateSpeechRsp_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GenerateSpeechRsp_result members

    /// <summary>
    /// 语音数据，Base64编码格式返回。
    /// </summary>

    std::string getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::string& value);


protected:
    std::string data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_GenerateSpeechRsp_result_H_
