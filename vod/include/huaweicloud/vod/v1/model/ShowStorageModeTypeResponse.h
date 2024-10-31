
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowStorageModeTypeResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowStorageModeTypeResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ShowStorageModeTypeResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStorageModeTypeResponse();
    virtual ~ShowStorageModeTypeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStorageModeTypeResponse members

    /// <summary>
    /// 降冷模式。 取值如下： - WHOLE：整个媒资粒度。 - ORIGIN：原文件粒度。 
    /// </summary>

    std::string getStorageModeType() const;
    bool storageModeTypeIsSet() const;
    void unsetstorageModeType();
    void setStorageModeType(const std::string& value);


protected:
    std::string storageModeType_;
    bool storageModeTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowStorageModeTypeResponse_H_
