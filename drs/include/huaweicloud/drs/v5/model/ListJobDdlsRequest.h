
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListJobDdlsRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListJobDdlsRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ListJobDdlsRequest
    : public ModelBase
{
public:
    ListJobDdlsRequest();
    virtual ~ListJobDdlsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJobDdlsRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 偏移量，默认值为0，表示查询该偏移量后面的记录。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询返回记录的数量限制.默认值为10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// DDL序列起始值。
    /// </summary>

    int64_t getStartSeqNo() const;
    bool startSeqNoIsSet() const;
    void unsetstartSeqNo();
    void setStartSeqNo(int64_t value);

    /// <summary>
    /// DDL序列结束值。
    /// </summary>

    int64_t getEndSeqNo() const;
    bool endSeqNoIsSet() const;
    void unsetendSeqNo();
    void setEndSeqNo(int64_t value);

    /// <summary>
    /// DDL状态，0为无告警，1为告警中。
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int64_t startSeqNo_;
    bool startSeqNoIsSet_;
    int64_t endSeqNo_;
    bool endSeqNoIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListJobDdlsRequest& dereference_from_shared_ptr(std::shared_ptr<ListJobDdlsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListJobDdlsRequest_H_
