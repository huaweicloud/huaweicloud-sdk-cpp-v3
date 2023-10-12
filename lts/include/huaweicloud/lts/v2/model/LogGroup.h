
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_LogGroup_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_LogGroup_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 返回的日志组信息
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  LogGroup
    : public ModelBase
{
public:
    LogGroup();
    virtual ~LogGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LogGroup members

    /// <summary>
    /// 创建时间 
    /// </summary>

    int64_t getCreationTime() const;
    bool creationTimeIsSet() const;
    void unsetcreationTime();
    void setCreationTime(int64_t value);

    /// <summary>
    /// 日志组名称 
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// 日志组ID 
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志存储时间 天 
    /// </summary>

    int32_t getTtlInDays() const;
    bool ttlInDaysIsSet() const;
    void unsetttlInDays();
    void setTtlInDays(int32_t value);

    /// <summary>
    /// 日志流所属标签
    /// </summary>

    std::map<std::string, std::string>& getTag();
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::map<std::string, std::string>& value);


protected:
    int64_t creationTime_;
    bool creationTimeIsSet_;
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    int32_t ttlInDays_;
    bool ttlInDaysIsSet_;
    std::map<std::string, std::string> tag_;
    bool tagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_LogGroup_H_
