
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_SlowlogResult_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_SlowlogResult_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  SlowlogResult
    : public ModelBase
{
public:
    SlowlogResult();
    virtual ~SlowlogResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SlowlogResult members

    /// <summary>
    /// 节点名称。
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);

    /// <summary>
    /// 执行语法。
    /// </summary>

    std::string getQuerySample() const;
    bool querySampleIsSet() const;
    void unsetquerySample();
    void setQuerySample(const std::string& value);

    /// <summary>
    /// 语句类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 执行时间。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 等待锁时间。
    /// </summary>

    std::string getLockTime() const;
    bool lockTimeIsSet() const;
    void unsetlockTime();
    void setLockTime(const std::string& value);

    /// <summary>
    /// 角色所在数据库名称。
    /// </summary>

    std::string getRowsSent() const;
    bool rowsSentIsSet() const;
    void unsetrowsSent();
    void setRowsSent(const std::string& value);

    /// <summary>
    /// 扫描的行数量。
    /// </summary>

    std::string getRowsExamined() const;
    bool rowsExaminedIsSet() const;
    void unsetrowsExamined();
    void setRowsExamined(const std::string& value);

    /// <summary>
    /// 所属数据库。
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// 发生时间，UTC时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);


protected:
    std::string nodeName_;
    bool nodeNameIsSet_;
    std::string querySample_;
    bool querySampleIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string time_;
    bool timeIsSet_;
    std::string lockTime_;
    bool lockTimeIsSet_;
    std::string rowsSent_;
    bool rowsSentIsSet_;
    std::string rowsExamined_;
    bool rowsExaminedIsSet_;
    std::string database_;
    bool databaseIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_SlowlogResult_H_
