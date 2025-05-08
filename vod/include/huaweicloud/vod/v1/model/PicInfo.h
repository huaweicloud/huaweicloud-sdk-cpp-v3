
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_PicInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_PicInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  PicInfo
    : public ModelBase
{
public:
    PicInfo();
    virtual ~PicInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PicInfo members

    /// <summary>
    /// 截图在obs桶中路径
    /// </summary>

    std::string getObjectKey() const;
    bool objectKeyIsSet() const;
    void unsetobjectKey();
    void setObjectKey(const std::string& value);


protected:
    std::string objectKey_;
    bool objectKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_PicInfo_H_
