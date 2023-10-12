
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_RunRecordRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_RunRecordRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/RecordControlInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  RunRecordRequest
    : public ModelBase
{
public:
    RunRecordRequest();
    virtual ~RunRecordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunRecordRequest members

    /// <summary>
    /// 操作行为。 取值如下： - START：对指定流开始录制，必须在直播流已经推送情况下才能正常启动，使用此命令启动录制的直播流如果发生了断流且超出断流时长，就会停止录制，并且重新推流后不会自动启动录制。 - STOP：对指定流停止录制。 
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RecordControlInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RecordControlInfo& value);


protected:
    std::string action_;
    bool actionIsSet_;
    RecordControlInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RunRecordRequest& dereference_from_shared_ptr(std::shared_ptr<RunRecordRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_RunRecordRequest_H_
