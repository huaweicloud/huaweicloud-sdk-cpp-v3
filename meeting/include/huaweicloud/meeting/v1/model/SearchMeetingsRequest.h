
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchMeetingsRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchMeetingsRequest_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  SearchMeetingsRequest
    : public ModelBase
{
public:
    SearchMeetingsRequest();
    virtual ~SearchMeetingsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchMeetingsRequest members

    /// <summary>
    /// 用户的UUID。 &gt; 仅管理员有权限查询本企业其他用户的会议列表；普通帐号该字段无效，只能查询自己的。 
    /// </summary>

    std::string getUserUUID() const;
    bool userUUIDIsSet() const;
    void unsetuserUUID();
    void setUserUUID(const std::string& value);

    /// <summary>
    /// 查询偏移量。默认为0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询数量。默认是20，最大500条。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 是否查询企业下所有用户的会议记录。默认值为false。 * true：查询所有用户的会议 * false：仅查询管理员自己创建的会议 &gt; 仅对企业管理员生效。
    /// </summary>

    bool isQueryAll() const;
    bool queryAllIsSet() const;
    void unsetqueryAll();
    void setQueryAll(bool value);

    /// <summary>
    /// 查询条件。会议主题、会议预约人和会议ID等可作为搜索内容。长度限制为1-128个字符。
    /// </summary>

    std::string getSearchKey() const;
    bool searchKeyIsSet() const;
    void unsetsearchKey();
    void setSearchKey(const std::string& value);

    /// <summary>
    /// 查询时间范围。 - ADAY:  一天 - AWEEK:  一周 - AMONTH:  一个月 - ALL:  查询所有
    /// </summary>

    std::string getQueryConfMode() const;
    bool queryConfModeIsSet() const;
    void unsetqueryConfMode();
    void setQueryConfMode(const std::string& value);

    /// <summary>
    /// 查询结果排序。 - ASC_StartTIME:  按会议开始时间升序排序 - DSC_StartTIME:  按会议开始时间降序排序
    /// </summary>

    std::string getSortType() const;
    bool sortTypeIsSet() const;
    void unsetsortType();
    void setSortType(const std::string& value);

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
    std::string userUUID_;
    bool userUUIDIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    bool queryAll_;
    bool queryAllIsSet_;
    std::string searchKey_;
    bool searchKeyIsSet_;
    std::string queryConfMode_;
    bool queryConfModeIsSet_;
    std::string sortType_;
    bool sortTypeIsSet_;
    std::string xAuthorizationType_;
    bool xAuthorizationTypeIsSet_;
    std::string xSiteId_;
    bool xSiteIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchMeetingsRequest& dereference_from_shared_ptr(std::shared_ptr<SearchMeetingsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchMeetingsRequest_H_
