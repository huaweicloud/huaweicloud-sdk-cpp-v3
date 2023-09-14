
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListAuditLogDownloadLinkRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListAuditLogDownloadLinkRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListAuditLogDownloadLinkRequest
    : public ModelBase
{
public:
    ListAuditLogDownloadLinkRequest();
    virtual ~ListAuditLogDownloadLinkRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListAuditLogDownloadLinkRequest members

    /// <summary>
    /// 请求语言类型。默认en-us。 取值范围： - en-us - zh-cn
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 实例ID，严格匹配UUID规则。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 节点ID。 - 若输入，则只获取该节点的全量SQL下载链接。 - 若不输入，则获取该实例所有节点的全量SQL下载链接。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 上次查询的最后一个文件的文件名。 - 若输入，则从该文件名以后按字典顺序开始查询。 - 若不输入，则从第一个文件开始查询。
    /// </summary>

    std::string getLastFileName() const;
    bool lastFileNameIsSet() const;
    void unsetlastFileName();
    void setLastFileName(const std::string& value);

    /// <summary>
    /// 一次查询返回的文件数量。  默认值为10，取值范围：1~50之间的整数值。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 开始时间，不得早于实例创建时间。格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间，不得晚于当前时间。格式为“yyyy-mm-ddThh:mm:ssZ”。  其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string lastFileName_;
    bool lastFileNameIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAuditLogDownloadLinkRequest& dereference_from_shared_ptr(std::shared_ptr<ListAuditLogDownloadLinkRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListAuditLogDownloadLinkRequest_H_
