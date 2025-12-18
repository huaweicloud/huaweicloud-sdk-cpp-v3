
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddMaterialRequestBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddMaterialRequestBody_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  AddMaterialRequestBody
    : public ModelBase
{
public:
    AddMaterialRequestBody();
    virtual ~AddMaterialRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddMaterialRequestBody members

    /// <summary>
    /// 素材文件。 - 只能上传jpg/jpeg/png格式文件，分辨率比率16:9，最大分辨率为3840*2160（推荐） - 请先命名完图片名称再上传
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

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_AddMaterialRequestBody_H_
