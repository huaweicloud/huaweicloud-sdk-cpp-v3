
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchResourceOpRecordRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchResourceOpRecordRequest_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  SearchResourceOpRecordRequest
    : public ModelBase
{
public:
    SearchResourceOpRecordRequest();
    virtual ~SearchResourceOpRecordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchResourceOpRecordRequest members

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
    /// 查询过期时间在该时间戳之后的订单操作记录。
    /// </summary>

    int64_t getStartExpireDate() const;
    bool startExpireDateIsSet() const;
    void unsetstartExpireDate();
    void setStartExpireDate(int64_t value);

    /// <summary>
    /// 查询过期时间在该时间戳之前的订单操作记录。
    /// </summary>

    int64_t getEndExpireDate() const;
    bool endExpireDateIsSet() const;
    void unsetendExpireDate();
    void setEndExpireDate(int64_t value);

    /// <summary>
    /// 查询操作时间在该时间戳之后的订单操作记录。
    /// </summary>

    int64_t getStartOperateDate() const;
    bool startOperateDateIsSet() const;
    void unsetstartOperateDate();
    void setStartOperateDate(int64_t value);

    /// <summary>
    /// 查询操作时间在该时间戳之前的订单操作记录。
    /// </summary>

    int64_t getEndOperateDate() const;
    bool endOperateDateIsSet() const;
    void unsetendOperateDate();
    void setEndOperateDate(int64_t value);

    /// <summary>
    /// 订单资源类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 当前仅当资源类型为vmr时生效。
    /// </summary>

    std::string getTypeId() const;
    bool typeIdIsSet() const;
    void unsettypeId();
    void setTypeId(const std::string& value);

    /// <summary>
    /// 操作类型。 - 0：添加 - 1：删除 - 2：修改 - 3：停用 - 4：启用
    /// </summary>

    int32_t getOperateType() const;
    bool operateTypeIsSet() const;
    void unsetoperateType();
    void setOperateType(int32_t value);


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
    int64_t startOperateDate_;
    bool startOperateDateIsSet_;
    int64_t endOperateDate_;
    bool endOperateDateIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string typeId_;
    bool typeIdIsSet_;
    int32_t operateType_;
    bool operateTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchResourceOpRecordRequest& dereference_from_shared_ptr(std::shared_ptr<SearchResourceOpRecordRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchResourceOpRecordRequest_H_
