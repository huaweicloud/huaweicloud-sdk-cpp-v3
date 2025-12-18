
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetProfileImageRequestBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetProfileImageRequestBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/HttpContent.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SetProfileImageRequestBody
    : public ModelBase
{
public:
    SetProfileImageRequestBody();
    virtual ~SetProfileImageRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetProfileImageRequestBody members

    /// <summary>
    /// 上传的头像图片，图片文件不超过10MB，尺寸不超过4096*4096
    /// </summary>

    HttpContent getFile() const;
    bool fileIsSet() const;
    void unsetfile();
    void setFile(const HttpContent& value);


protected:
    HttpContent file_;
    bool fileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetProfileImageRequestBody_H_
