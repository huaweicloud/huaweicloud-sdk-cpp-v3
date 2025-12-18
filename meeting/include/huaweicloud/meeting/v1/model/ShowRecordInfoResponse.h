
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRecordInfoResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRecordInfoResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/RecordInfoDO.h>
#include <string>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowRecordInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRecordInfoResponse();
    virtual ~ShowRecordInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRecordInfoResponse members

    /// <summary>
    /// 结果码
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 结果描述
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RecordInfoDO getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const RecordInfoDO& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string message_;
    bool messageIsSet_;
    RecordInfoDO data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRecordInfoResponse_H_
