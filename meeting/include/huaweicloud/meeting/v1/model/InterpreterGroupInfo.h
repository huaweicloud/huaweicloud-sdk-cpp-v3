
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_InterpreterGroupInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_InterpreterGroupInfo_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/InterpreterInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 传译组信息
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  InterpreterGroupInfo
    : public ModelBase
{
public:
    InterpreterGroupInfo();
    virtual ~InterpreterGroupInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InterpreterGroupInfo members

    /// <summary>
    /// 传译组序号。
    /// </summary>

    std::string getGroupID() const;
    bool groupIDIsSet() const;
    void unsetgroupID();
    void setGroupID(const std::string& value);

    /// <summary>
    /// 传译组名称。
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 传译组类型，MANUAL：人工传译，AI：AI传译。默认MANUAL。
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);

    /// <summary>
    /// 传译组支持的第一种语言。
    /// </summary>

    std::string getFirstLanguage() const;
    bool firstLanguageIsSet() const;
    void unsetfirstLanguage();
    void setFirstLanguage(const std::string& value);

    /// <summary>
    /// 传译组支持的第二种语言。
    /// </summary>

    std::string getSecondLanguage() const;
    bool secondLanguageIsSet() const;
    void unsetsecondLanguage();
    void setSecondLanguage(const std::string& value);

    /// <summary>
    /// 传译员列表。
    /// </summary>

    std::vector<InterpreterInfo>& getInterpreters();
    bool interpretersIsSet() const;
    void unsetinterpreters();
    void setInterpreters(const std::vector<InterpreterInfo>& value);


protected:
    std::string groupID_;
    bool groupIDIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::string groupType_;
    bool groupTypeIsSet_;
    std::string firstLanguage_;
    bool firstLanguageIsSet_;
    std::string secondLanguage_;
    bool secondLanguageIsSet_;
    std::vector<InterpreterInfo> interpreters_;
    bool interpretersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_InterpreterGroupInfo_H_
