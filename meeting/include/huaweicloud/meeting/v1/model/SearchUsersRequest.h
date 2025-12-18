
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchUsersRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchUsersRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  SearchUsersRequest
    : public ModelBase
{
public:
    SearchUsersRequest();
    virtual ~SearchUsersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchUsersRequest members

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
    /// 查询偏移量,若超过最大数量，则返回最后一页。
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
    /// 搜索条件，支持名称、手机、邮箱、帐号、第三方帐号模糊搜索。
    /// </summary>

    std::string getSearchKey() const;
    bool searchKeyIsSet() const;
    void unsetsearchKey();
    void setSearchKey(const std::string& value);

    /// <summary>
    /// 排序字段名称 支持的取值： - userType - adminType - ldapAccount - deptCode - status - sortLevel
    /// </summary>

    std::string getSortField() const;
    bool sortFieldIsSet() const;
    void unsetsortField();
    void setSortField(const std::string& value);

    /// <summary>
    /// 是否按升序排序。
    /// </summary>

    bool isIsAsc() const;
    bool isAscIsSet() const;
    void unsetisAsc();
    void setIsAsc(bool value);

    /// <summary>
    /// 部门编码，不带则查询所有。
    /// </summary>

    std::string getDeptCode() const;
    bool deptCodeIsSet() const;
    void unsetdeptCode();
    void setDeptCode(const std::string& value);

    /// <summary>
    /// 是否查询子部门。 默认值: true 
    /// </summary>

    bool isEnableSubDept() const;
    bool enableSubDeptIsSet() const;
    void unsetenableSubDept();
    void setEnableSubDept(bool value);

    /// <summary>
    /// 根据管理员类型查询。 * 1：普通管理员 * 2：非管理员 
    /// </summary>

    int32_t getAdminType() const;
    bool adminTypeIsSet() const;
    void unsetadminType();
    void setAdminType(int32_t value);

    /// <summary>
    /// 是否开启智能协同白板功能功能位，不带则搜索所有。 &gt; 该参数将废弃，请勿使用。 
    /// </summary>

    bool isEnableRoom() const;
    bool enableRoomIsSet() const;
    void unsetenableRoom();
    void setEnableRoom(bool value);

    /// <summary>
    /// 用户类型。默认2。 * 2：普通用户 * 12：智慧屏用户 * 13：ideaHub用户 * 14: SmartRooms用户 
    /// </summary>

    std::vector<int32_t>& getUserType();
    bool userTypeIsSet() const;
    void unsetuserType();
    void setUserType(std::vector<int32_t> value);

    /// <summary>
    /// 用户状态。不带则查询所有。 * 0：正常 * 1：停用。 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 是否查询未激活的终端。 默认值: false 
    /// </summary>

    bool isContainsUnActive() const;
    bool containsUnActiveIsSet() const;
    void unsetcontainsUnActive();
    void setContainsUnActive(bool value);


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
    std::string sortField_;
    bool sortFieldIsSet_;
    bool isAsc_;
    bool isAscIsSet_;
    std::string deptCode_;
    bool deptCodeIsSet_;
    bool enableSubDept_;
    bool enableSubDeptIsSet_;
    int32_t adminType_;
    bool adminTypeIsSet_;
    bool enableRoom_;
    bool enableRoomIsSet_;
    std::vector<int32_t> userType_;
    bool userTypeIsSet_;
    int32_t status_;
    bool statusIsSet_;
    bool containsUnActive_;
    bool containsUnActiveIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchUsersRequest& dereference_from_shared_ptr(std::shared_ptr<SearchUsersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchUsersRequest_H_
