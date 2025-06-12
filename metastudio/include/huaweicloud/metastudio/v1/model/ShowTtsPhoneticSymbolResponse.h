
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTtsPhoneticSymbolResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTtsPhoneticSymbolResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowTtsPhoneticSymbolResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTtsPhoneticSymbolResponse();
    virtual ~ShowTtsPhoneticSymbolResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTtsPhoneticSymbolResponse members

    /// <summary>
    /// 音标列表
    /// </summary>

    std::vector<std::string>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<std::string>& value);


protected:
    std::vector<std::string> data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTtsPhoneticSymbolResponse_H_
