
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowUserRequestDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowUserRequestDTO_H_


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
/// 用户ID或第三方账号信息列表
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowUserRequestDTO
    : public ModelBase
{
public:
    ShowUserRequestDTO();
    virtual ~ShowUserRequestDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserRequestDTO members

    /// <summary>
    /// 用户ID或者第三方账号
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowUserRequestDTO_H_
