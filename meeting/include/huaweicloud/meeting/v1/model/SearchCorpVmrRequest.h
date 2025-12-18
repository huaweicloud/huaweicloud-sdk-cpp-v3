
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchCorpVmrRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchCorpVmrRequest_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  SearchCorpVmrRequest
    : public ModelBase
{
public:
    SearchCorpVmrRequest();
    virtual ~SearchCorpVmrRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchCorpVmrRequest members

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
    /// 搜索条件。支持云会议室名称、ID及分配的用户、硬终端名称模糊搜索。
    /// </summary>

    std::string getSearchKey() const;
    bool searchKeyIsSet() const;
    void unsetsearchKey();
    void setSearchKey(const std::string& value);

    /// <summary>
    /// VMR模式。不填则默认为云会议室。 - 1：云会议室 - 2：网络研讨会 
    /// </summary>

    int32_t getVmrMode() const;
    bool vmrModeIsSet() const;
    void unsetvmrMode();
    void setVmrMode(int32_t value);

    /// <summary>
    /// 云会议室状态。不填则查询所有。 * 0：正常 * 1：停用 * 2：未分配 
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
    int32_t vmrMode_;
    bool vmrModeIsSet_;
    int32_t status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchCorpVmrRequest& dereference_from_shared_ptr(std::shared_ptr<SearchCorpVmrRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchCorpVmrRequest_H_
