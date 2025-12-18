
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestQosRequestDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestQosRequestDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/UserQosReqInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// QOS请求
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestQosRequestDTO
    : public ModelBase
{
public:
    RestQosRequestDTO();
    virtual ~RestQosRequestDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestQosRequestDTO members

    /// <summary>
    /// 用户pid 媒体接入类型列表
    /// </summary>

    std::vector<UserQosReqInfo>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<UserQosReqInfo>& value);


protected:
    std::vector<UserQosReqInfo> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestQosRequestDTO_H_
