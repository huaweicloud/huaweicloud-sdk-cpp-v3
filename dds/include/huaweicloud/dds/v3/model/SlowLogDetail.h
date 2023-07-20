
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_SlowLogDetail_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_SlowLogDetail_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_DDS_V3_EXPORT  SlowLogDetail
    : public ModelBase
{
public:
    SlowLogDetail();
    virtual ~SlowLogDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SlowLogDetail members

    /// <summary>
    /// 节点名称。
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);

    /// <summary>
    /// 节点ID。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 执行语句。
    /// </summary>

    std::string getWholeMessage() const;
    bool wholeMessageIsSet() const;
    void unsetwholeMessage();
    void setWholeMessage(const std::string& value);

    /// <summary>
    /// 语句类型。
    /// </summary>

    std::string getOperateType() const;
    bool operateTypeIsSet() const;
    void unsetoperateType();
    void setOperateType(const std::string& value);

    /// <summary>
    /// 执行时间。单位：ms
    /// </summary>

    int32_t getCostTime() const;
    bool costTimeIsSet() const;
    void unsetcostTime();
    void setCostTime(int32_t value);

    /// <summary>
    /// 等待锁时间。单位：us
    /// </summary>

    int32_t getLockTime() const;
    bool lockTimeIsSet() const;
    void unsetlockTime();
    void setLockTime(int32_t value);

    /// <summary>
    /// 返回的文档数。
    /// </summary>

    int32_t getDocsReturned() const;
    bool docsReturnedIsSet() const;
    void unsetdocsReturned();
    void setDocsReturned(int32_t value);

    /// <summary>
    /// 扫描的文档数。
    /// </summary>

    int32_t getDocsScanned() const;
    bool docsScannedIsSet() const;
    void unsetdocsScanned();
    void setDocsScanned(int32_t value);

    /// <summary>
    /// 日志所属的数据库库名。
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// 日志所属的数据库表名。
    /// </summary>

    std::string getCollection() const;
    bool collectionIsSet() const;
    void unsetcollection();
    void setCollection(const std::string& value);

    /// <summary>
    /// 日志产生时间，UTC时间。 格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getLogTime() const;
    bool logTimeIsSet() const;
    void unsetlogTime();
    void setLogTime(const std::string& value);

    /// <summary>
    /// 日志单行序列号
    /// </summary>

    std::string getLineNum() const;
    bool lineNumIsSet() const;
    void unsetlineNum();
    void setLineNum(const std::string& value);


protected:
    std::string nodeName_;
    bool nodeNameIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string wholeMessage_;
    bool wholeMessageIsSet_;
    std::string operateType_;
    bool operateTypeIsSet_;
    int32_t costTime_;
    bool costTimeIsSet_;
    int32_t lockTime_;
    bool lockTimeIsSet_;
    int32_t docsReturned_;
    bool docsReturnedIsSet_;
    int32_t docsScanned_;
    bool docsScannedIsSet_;
    std::string database_;
    bool databaseIsSet_;
    std::string collection_;
    bool collectionIsSet_;
    std::string logTime_;
    bool logTimeIsSet_;
    std::string lineNum_;
    bool lineNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_SlowLogDetail_H_
