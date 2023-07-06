
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_CompressRequest_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_CompressRequest_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  CompressRequest
    : public ModelBase
{
public:
    CompressRequest();
    virtual ~CompressRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CompressRequest members

    /// <summary>
    /// GZIP压缩开关。0关闭。1打开。
    /// </summary>

    int32_t getCompressSwitch() const;
    bool compressSwitchIsSet() const;
    void unsetcompressSwitch();
    void setCompressSwitch(int32_t value);


protected:
    int32_t compressSwitch_;
    bool compressSwitchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_CompressRequest_H_
