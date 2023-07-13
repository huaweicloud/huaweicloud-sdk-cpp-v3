
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowHistoryTasksRequest_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowHistoryTasksRequest_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ShowHistoryTasksRequest
    : public ModelBase
{
public:
    ShowHistoryTasksRequest();
    virtual ~ShowHistoryTasksRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowHistoryTasksRequest members

    /// <summary>
    /// 当用户开启企业项目功能时，该参数生效，表示查询资源所属项目，\&quot;all\&quot;表示所有项目。注意：当使用子帐号调用接口时，该参数必传。  您可以通过调用企业项目管理服务（EPS）的查询企业项目列表接口（ListEnterpriseProject）查询企业项目id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 单页最大数量，取值范围为1-10000。page_size和page_number必须同时传值。默认值30。
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 当前查询第几页，取值范围为1-65535。默认值1。
    /// </summary>

    int32_t getPageNumber() const;
    bool pageNumberIsSet() const;
    void unsetpageNumber();
    void setPageNumber(int32_t value);

    /// <summary>
    /// 任务状态。 task_inprocess 表示任务处理中，task_done表示任务完成。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 查询起始时间，相对于UTC 1970-01-01到当前时间相隔的毫秒数。
    /// </summary>

    int64_t getStartDate() const;
    bool startDateIsSet() const;
    void unsetstartDate();
    void setStartDate(int64_t value);

    /// <summary>
    /// 查询结束时间，相对于UTC 1970-01-01到当前时间相隔的毫秒数。
    /// </summary>

    int64_t getEndDate() const;
    bool endDateIsSet() const;
    void unsetendDate();
    void setEndDate(int64_t value);

    /// <summary>
    /// 用来排序的字段，支持的字段有“task_type”，“total”，“processing”， “succeed”，“failed”，“create_time”。order_field和order_type必须同时传值，否则使用默认值\&quot;create_time\&quot; 和 \&quot;desc\&quot;。
    /// </summary>

    std::string getOrderField() const;
    bool orderFieldIsSet() const;
    void unsetorderField();
    void setOrderField(const std::string& value);

    /// <summary>
    /// desc 或者asc。默认值desc。
    /// </summary>

    std::string getOrderType() const;
    bool orderTypeIsSet() const;
    void unsetorderType();
    void setOrderType(const std::string& value);

    /// <summary>
    /// 默认是文件file。file：文件,directory：目录。
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t pageNumber_;
    bool pageNumberIsSet_;
    std::string status_;
    bool statusIsSet_;
    int64_t startDate_;
    bool startDateIsSet_;
    int64_t endDate_;
    bool endDateIsSet_;
    std::string orderField_;
    bool orderFieldIsSet_;
    std::string orderType_;
    bool orderTypeIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowHistoryTasksRequest& dereference_from_shared_ptr(std::shared_ptr<ShowHistoryTasksRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowHistoryTasksRequest_H_
