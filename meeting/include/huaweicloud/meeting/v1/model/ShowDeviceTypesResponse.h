
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowDeviceTypesResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowDeviceTypesResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/QueryDeviceTypeResultDTO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowDeviceTypesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDeviceTypesResponse();
    virtual ~ShowDeviceTypesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDeviceTypesResponse members

    /// <summary>
    /// 查询到的终端类型列表
    /// </summary>

    std::vector<QueryDeviceTypeResultDTO>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<QueryDeviceTypeResultDTO>& value);


protected:
    std::vector<QueryDeviceTypeResultDTO> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowDeviceTypesResponse_H_
