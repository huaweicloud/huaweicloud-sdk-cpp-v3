
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CoverInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CoverInfo_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 封面信息。
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  CoverInfo
    : public ModelBase
{
public:
    CoverInfo();
    virtual ~CoverInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CoverInfo members

    /// <summary>
    /// 封面文件的下载地址。
    /// </summary>

    std::string getCoverUrl() const;
    bool coverUrlIsSet() const;
    void unsetcoverUrl();
    void setCoverUrl(const std::string& value);


protected:
    std::string coverUrl_;
    bool coverUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CoverInfo_H_
