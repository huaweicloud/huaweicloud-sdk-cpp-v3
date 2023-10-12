
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_Parameter_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_Parameter_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 需要提取音频的参数信息。
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  Parameter
    : public ModelBase
{
public:
    Parameter();
    virtual ~Parameter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Parameter members

    /// <summary>
    /// 封装格式。  取值如下： - MP3 - AAC
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);


protected:
    std::string format_;
    bool formatIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_Parameter_H_
