
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowHistoryTaskDetailsRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowHistoryTaskDetailsRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowHistoryTaskDetailsRequest
    : public ModelBase
{
public:
    ShowHistoryTaskDetailsRequest();
    virtual ~ShowHistoryTaskDetailsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHistoryTaskDetailsRequest members

    /// <summary>
    /// 当用户开启企业项目功能时，该参数生效，表示查询资源所属项目，\&quot;all\&quot;表示所有项目。注意：当使用子帐号调用接口时，该参数必传。  您可以通过调用企业项目管理服务（EPS）的查询企业项目列表接口（ListEnterpriseProject）查询企业项目id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 刷新任务ID。
    /// </summary>

    std::string getHistoryTasksId() const;
    bool historyTasksIdIsSet() const;
    void unsethistoryTasksId();
    void setHistoryTasksId(const std::string& value);

    /// <summary>
    /// 刷新预热的urls所显示单页最大数量，取值范围为1-10000。page_size和page_number必须同时传值。默认值30。
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 刷新预热的urls当前查询为第几页，取值范围为1-65535。默认值1。
    /// </summary>

    int32_t getPageNumber() const;
    bool pageNumberIsSet() const;
    void unsetpageNumber();
    void setPageNumber(int32_t value);

    /// <summary>
    /// url的状态 processing 处理中，succeed 完成，failed 失败，waiting 等待，refreshing 刷新中，preheating 预热中。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// url的地址。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 刷新预热任务的创建时间。不传参默认为查询7天内的任务。最长可查询15天内数据。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string historyTasksId_;
    bool historyTasksIdIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t pageNumber_;
    bool pageNumberIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string url_;
    bool urlIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowHistoryTaskDetailsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowHistoryTaskDetailsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowHistoryTaskDetailsRequest_H_
