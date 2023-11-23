
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_MongodbErrorLogDetail_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_MongodbErrorLogDetail_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  MongodbErrorLogDetail
    : public ModelBase
{
public:
    MongodbErrorLogDetail();
    virtual ~MongodbErrorLogDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MongodbErrorLogDetail members

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
    /// 描述信息。
    /// </summary>

    std::string getRawMessage() const;
    bool rawMessageIsSet() const;
    void unsetrawMessage();
    void setRawMessage(const std::string& value);

    /// <summary>
    /// 日志级别。
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);

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
    std::string rawMessage_;
    bool rawMessageIsSet_;
    std::string severity_;
    bool severityIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_MongodbErrorLogDetail_H_
