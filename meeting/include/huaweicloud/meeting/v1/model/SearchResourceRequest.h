
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchResourceRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchResourceRequest_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  SearchResourceRequest
    : public ModelBase
{
public:
    SearchResourceRequest();
    virtual ~SearchResourceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchResourceRequest members

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
    /// 搜索条件。
    /// </summary>

    std::string getSearchKey() const;
    bool searchKeyIsSet() const;
    void unsetsearchKey();
    void setSearchKey(const std::string& value);

    /// <summary>
    /// 企业id。
    /// </summary>

    std::string getCorpId() const;
    bool corpIdIsSet() const;
    void unsetcorpId();
    void setCorpId(const std::string& value);

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
    /// 资源类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 资源类型Id,若想搜索5方VMR时，需携带5方vmrpkg对应的id。
    /// </summary>

    std::string getTypeId() const;
    bool typeIdIsSet() const;
    void unsettypeId();
    void setTypeId(const std::string& value);

    /// <summary>
    /// 订单状态: - 0：正常 - 1：到期，仅查询时返回 - 2：停用
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
    std::string corpId_;
    bool corpIdIsSet_;
    int64_t startExpireDate_;
    bool startExpireDateIsSet_;
    int64_t endExpireDate_;
    bool endExpireDateIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string typeId_;
    bool typeIdIsSet_;
    int32_t status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchResourceRequest& dereference_from_shared_ptr(std::shared_ptr<SearchResourceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchResourceRequest_H_
