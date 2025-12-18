
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowHisMeetingDetailRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowHisMeetingDetailRequest_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowHisMeetingDetailRequest
    : public ModelBase
{
public:
    ShowHisMeetingDetailRequest();
    virtual ~ShowHisMeetingDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHisMeetingDetailRequest members

    /// <summary>
    /// 会议UUID。
    /// </summary>

    std::string getConfUUID() const;
    bool confUUIDIsSet() const;
    void unsetconfUUID();
    void setConfUUID(const std::string& value);

    /// <summary>
    /// 查询偏移量。默认为0。针对PageParticipant 中的与会者分页。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询数量。默认值20。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 查询条件 。会议主题、会议预约人和会议ID等可作为搜索内容。长度限制为1-128个字符。
    /// </summary>

    std::string getSearchKey() const;
    bool searchKeyIsSet() const;
    void unsetsearchKey();
    void setSearchKey(const std::string& value);

    /// <summary>
    /// 用户的UUID。 &gt; 该参数将废弃，请勿使用。 
    /// </summary>

    std::string getUserUUID() const;
    bool userUUIDIsSet() const;
    void unsetuserUUID();
    void setUserUUID(const std::string& value);

    /// <summary>
    /// 默认值为0。 0: 不区分会议室和与会人。 1：分页查询区分会议室和与会人，结果合并返回。 2：单独查询会议室与与会人，结果也是单独返回。
    /// </summary>

    int32_t getXType() const;
    bool xTypeIsSet() const;
    void unsetxType();
    void setXType(int32_t value);

    /// <summary>
    /// 当X-Type为2时，该字段有效。默认值为0。 0: 查询与会人。 1：查询终端。
    /// </summary>

    int32_t getXQueryType() const;
    bool xQueryTypeIsSet() const;
    void unsetxQueryType();
    void setXQueryType(int32_t value);

    /// <summary>
    /// 标识是否为第三方portal过来的请求。 &gt; 该参数将废弃，请勿使用。 
    /// </summary>

    std::string getXAuthorizationType() const;
    bool xAuthorizationTypeIsSet() const;
    void unsetxAuthorizationType();
    void setXAuthorizationType(const std::string& value);

    /// <summary>
    /// 用于区分到哪个HCSO站点鉴权。 &gt; 该参数将废弃，请勿使用。 
    /// </summary>

    std::string getXSiteId() const;
    bool xSiteIdIsSet() const;
    void unsetxSiteId();
    void setXSiteId(const std::string& value);


protected:
    std::string confUUID_;
    bool confUUIDIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string searchKey_;
    bool searchKeyIsSet_;
    std::string userUUID_;
    bool userUUIDIsSet_;
    int32_t xType_;
    bool xTypeIsSet_;
    int32_t xQueryType_;
    bool xQueryTypeIsSet_;
    std::string xAuthorizationType_;
    bool xAuthorizationTypeIsSet_;
    std::string xSiteId_;
    bool xSiteIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowHisMeetingDetailRequest& dereference_from_shared_ptr(std::shared_ptr<ShowHisMeetingDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowHisMeetingDetailRequest_H_
