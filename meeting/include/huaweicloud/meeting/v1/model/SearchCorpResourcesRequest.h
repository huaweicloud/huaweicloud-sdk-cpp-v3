
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchCorpResourcesRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchCorpResourcesRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SearchCorpResourcesRequest
    : public ModelBase
{
public:
    SearchCorpResourcesRequest();
    virtual ~SearchCorpResourcesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchCorpResourcesRequest members

    /// <summary>
    /// 请求requestId，用来标识一路请求，用于问题跟踪定位，建议使用UUID，若不携带，则后台自动生成。
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);

    /// <summary>
    /// 语言参数，默认为中文zh-CN，英文为en-US。
    /// </summary>

    std::string getAcceptLanguage() const;
    bool acceptLanguageIsSet() const;
    void unsetacceptLanguage();
    void setAcceptLanguage(const std::string& value);

    /// <summary>
    /// 查询偏移量,若超过最大数量，则返回最后一页的数据。 默认值：0。 
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询数量。 默认值：10。 
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 搜索条件，支持resourceId模糊查询。
    /// </summary>

    std::string getSearchKey() const;
    bool searchKeyIsSet() const;
    void unsetsearchKey();
    void setSearchKey(const std::string& value);

    /// <summary>
    /// 查询过期时间在该时间戳之后的资源项。
    /// </summary>

    int64_t getStartExpireDate() const;
    bool startExpireDateIsSet() const;
    void unsetstartExpireDate();
    void setStartExpireDate(int64_t value);

    /// <summary>
    /// 查询过期时间在该时间戳之前的资源项。
    /// </summary>

    int64_t getEndExpireDate() const;
    bool endExpireDateIsSet() const;
    void unsetendExpireDate();
    void setEndExpireDate(int64_t value);

    /// <summary>
    /// 资源类型。 - VMR        - 云会议室 - CONF_CALL  - 会议并发数 - HARD_1080P - 1080P硬终端 - HARD_720P  - 720P硬终端 - SOFT       - 软终端用户数 - ROOM       - 大屏软终端 - LIVE       - 直播推流 - RECORD     - 录播空间 - HARD_THIRD_PARTY - 第三方硬终端帐号 - HUAWEI_VISION -智慧屏 &gt; 查询网络研讨会资源时type字段为VMR。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// VMR模式，type为VMR时传递该参数 * 0：个人会议ID * 1：云会议室 * 2：网络研讨会 
    /// </summary>

    int32_t getVmrMode() const;
    bool vmrModeIsSet() const;
    void unsetvmrMode();
    void setVmrMode(int32_t value);

    /// <summary>
    /// 资源类型Id,若想搜索5方VMR时，需携带5方vmrpkg对应的id。
    /// </summary>

    std::string getTypeId() const;
    bool typeIdIsSet() const;
    void unsettypeId();
    void setTypeId(const std::string& value);

    /// <summary>
    /// 订单Id。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 订单状态。 - 0：正常 - 1：到期 - 2：停用 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string xRequestId_;
    bool xRequestIdIsSet_;
    std::string acceptLanguage_;
    bool acceptLanguageIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string searchKey_;
    bool searchKeyIsSet_;
    int64_t startExpireDate_;
    bool startExpireDateIsSet_;
    int64_t endExpireDate_;
    bool endExpireDateIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t vmrMode_;
    bool vmrModeIsSet_;
    std::string typeId_;
    bool typeIdIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    int32_t status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchCorpResourcesRequest& dereference_from_shared_ptr(std::shared_ptr<SearchCorpResourcesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchCorpResourcesRequest_H_
