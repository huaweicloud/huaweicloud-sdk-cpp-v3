
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_KeywordsRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_KeywordsRequest_H_


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
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  KeywordsRequest
    : public ModelBase
{
public:
    KeywordsRequest();
    virtual ~KeywordsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KeywordsRequest members

    /// <summary>
    /// 日志流id
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// 日志流名称
    /// </summary>

    std::string getLogStreamName() const;
    bool logStreamNameIsSet() const;
    void unsetlogStreamName();
    void setLogStreamName(const std::string& value);

    /// <summary>
    /// 日志组id
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志组名称
    /// </summary>

    std::string getLogGroupName() const;
    bool logGroupNameIsSet() const;
    void unsetlogGroupName();
    void setLogGroupName(const std::string& value);

    /// <summary>
    /// 关键词
    /// </summary>

    std::string getKeywords() const;
    bool keywordsIsSet() const;
    void unsetkeywords();
    void setKeywords(const std::string& value);

    /// <summary>
    /// 条件
    /// </summary>

    std::string getCondition() const;
    bool conditionIsSet() const;
    void unsetcondition();
    void setCondition(const std::string& value);

    /// <summary>
    /// 行数
    /// </summary>

    int32_t getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(int32_t value);

    /// <summary>
    /// 查询执行任务时最近数据的时间范围，最大值为60
    /// </summary>

    int32_t getSearchTimeRange() const;
    bool searchTimeRangeIsSet() const;
    void unsetsearchTimeRange();
    void setSearchTimeRange(int32_t value);

    /// <summary>
    /// 查询时间单位
    /// </summary>

    std::string getSearchTimeRangeUnit() const;
    bool searchTimeRangeUnitIsSet() const;
    void unsetsearchTimeRangeUnit();
    void setSearchTimeRangeUnit(const std::string& value);


protected:
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    std::string logStreamName_;
    bool logStreamNameIsSet_;
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logGroupName_;
    bool logGroupNameIsSet_;
    std::string keywords_;
    bool keywordsIsSet_;
    std::string condition_;
    bool conditionIsSet_;
    int32_t number_;
    bool numberIsSet_;
    int32_t searchTimeRange_;
    bool searchTimeRangeIsSet_;
    std::string searchTimeRangeUnit_;
    bool searchTimeRangeUnitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_KeywordsRequest_H_
