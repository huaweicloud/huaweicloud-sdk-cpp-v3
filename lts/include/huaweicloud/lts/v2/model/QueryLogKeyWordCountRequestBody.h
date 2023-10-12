
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_QueryLogKeyWordCountRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_QueryLogKeyWordCountRequestBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 日志关键词统计请求体。
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  QueryLogKeyWordCountRequestBody
    : public ModelBase
{
public:
    QueryLogKeyWordCountRequestBody();
    virtual ~QueryLogKeyWordCountRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryLogKeyWordCountRequestBody members

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 步长间隔
    /// </summary>

    int64_t getStepInterval() const;
    bool stepIntervalIsSet() const;
    void unsetstepInterval();
    void setStepInterval(int64_t value);

    /// <summary>
    /// 日志组ID
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 日志流ID
    /// </summary>

    std::string getStreamId() const;
    bool streamIdIsSet() const;
    void unsetstreamId();
    void setStreamId(const std::string& value);

    /// <summary>
    /// 关键词
    /// </summary>

    std::string getKeyWord() const;
    bool keyWordIsSet() const;
    void unsetkeyWord();
    void setKeyWord(const std::string& value);

    /// <summary>
    /// 日志迭代查询，默认为false（不开启迭代），true为开启迭代。
    /// </summary>

    bool isIsIterative() const;
    bool isIterativeIsSet() const;
    void unsetisIterative();
    void setIsIterative(bool value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int64_t stepInterval_;
    bool stepIntervalIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string streamId_;
    bool streamIdIsSet_;
    std::string keyWord_;
    bool keyWordIsSet_;
    bool isIterative_;
    bool isIterativeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_QueryLogKeyWordCountRequestBody_H_
