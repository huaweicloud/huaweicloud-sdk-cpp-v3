
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateMaterialRequestDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateMaterialRequestDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 信息窗素材信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  UpdateMaterialRequestDTO
    : public ModelBase
{
public:
    UpdateMaterialRequestDTO();
    virtual ~UpdateMaterialRequestDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateMaterialRequestDTO members

    /// <summary>
    /// 素材名称。
    /// </summary>

    std::string getMaterialName() const;
    bool materialNameIsSet() const;
    void unsetmaterialName();
    void setMaterialName(const std::string& value);


protected:
    std::string materialName_;
    bool materialNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateMaterialRequestDTO_H_
