
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CompareTaskParams_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CompareTaskParams_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>
#include <huaweicloud/drs/v5/model/DatabaseObject.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建或取消对比任务信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  CompareTaskParams
    : public ModelBase
{
public:
    CompareTaskParams();
    virtual ~CompareTaskParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CompareTaskParams members

    /// <summary>
    /// 取消对比任务必填。
    /// </summary>

    std::string getCompareTaskId() const;
    bool compareTaskIdIsSet() const;
    void unsetcompareTaskId();
    void setCompareTaskId(const std::string& value);

    /// <summary>
    /// 对比任务模式。取值： - object：对象对比。 - lines：行数对比。 - contents：内容对比。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 定时启动时间，时间戳格式。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 对比策略。
    /// </summary>

    std::map<std::string, std::string>& getOption();
    bool optionIsSet() const;
    void unsetoption();
    void setOption(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 对比选择对象。
    /// </summary>

    std::map<std::string, DatabaseObject>& getDbObject();
    bool dbObjectIsSet() const;
    void unsetdbObject();
    void setDbObject(const std::map<std::string, DatabaseObject>& value);


protected:
    std::string compareTaskId_;
    bool compareTaskIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::map<std::string, std::string> option_;
    bool optionIsSet_;
    std::map<std::string, DatabaseObject> dbObject_;
    bool dbObjectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CompareTaskParams_H_
