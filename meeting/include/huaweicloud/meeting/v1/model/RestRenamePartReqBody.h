
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestRenamePartReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestRenamePartReqBody_H_


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
/// 重命名与会者请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestRenamePartReqBody
    : public ModelBase
{
public:
    RestRenamePartReqBody();
    virtual ~RestRenamePartReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestRenamePartReqBody members

    /// <summary>
    /// 与会者标识。 已入会的必须填写该字段。
    /// </summary>

    std::string getParticipantID() const;
    bool participantIDIsSet() const;
    void unsetparticipantID();
    void setParticipantID(const std::string& value);

    /// <summary>
    /// 与会者号码。
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 新名称。
    /// </summary>

    std::string getNewName() const;
    bool newNameIsSet() const;
    void unsetnewName();
    void setNewName(const std::string& value);


protected:
    std::string participantID_;
    bool participantIDIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string newName_;
    bool newNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestRenamePartReqBody_H_
