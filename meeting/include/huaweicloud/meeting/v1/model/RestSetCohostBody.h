
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetCohostBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetCohostBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 申请联席主持人请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestSetCohostBody
    : public ModelBase
{
public:
    RestSetCohostBody();
    virtual ~RestSetCohostBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestSetCohostBody members

    /// <summary>
    /// - 0：撤销联席主持人 - 1：设置联席主持人
    /// </summary>

    int32_t getIsCohost() const;
    bool isCohostIsSet() const;
    void unsetisCohost();
    void setIsCohost(int32_t value);


protected:
    int32_t isCohost_;
    bool isCohostIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetCohostBody_H_
