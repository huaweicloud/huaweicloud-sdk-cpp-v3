
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchCorpDirRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchCorpDirRequest_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  SearchCorpDirRequest
    : public ModelBase
{
public:
    SearchCorpDirRequest();
    virtual ~SearchCorpDirRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchCorpDirRequest members

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
    /// 搜索条件。支持帐号、SIP号码、名称、手机、邮箱模糊搜索。
    /// </summary>

    std::string getSearchKey() const;
    bool searchKeyIsSet() const;
    void unsetsearchKey();
    void setSearchKey(const std::string& value);

    /// <summary>
    /// 部门编码。 
    /// </summary>

    std::string getDeptCode() const;
    bool deptCodeIsSet() const;
    void unsetdeptCode();
    void setDeptCode(const std::string& value);

    /// <summary>
    /// 是否查询子部门下的用户。 默认值：true。 
    /// </summary>

    bool isQuerySubDept() const;
    bool querySubDeptIsSet() const;
    void unsetquerySubDept();
    void setQuerySubDept(bool value);

    /// <summary>
    /// 搜索范围。默认值为ALL。 * NORMAL_USER - 查询普通用户。返回普通用户（响应中isHardTerminal&#x3D;false，type&#x3D;NORMAL_USER） * HARD_TERMINAL - 查询硬终端用户。返回大屏用户（响应中isHardTerminal&#x3D;false，type&#x3D;WHITE_BOARD）和硬终端用户（响应中isHardTerminal&#x3D;true，type&#x3D;HARD_TERMINAL） * ALL - 查询所有用户。 
    /// </summary>

    std::string getSearchScope() const;
    bool searchScopeIsSet() const;
    void unsetsearchScope();
    void setSearchScope(const std::string& value);


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
    std::string deptCode_;
    bool deptCodeIsSet_;
    bool querySubDept_;
    bool querySubDeptIsSet_;
    std::string searchScope_;
    bool searchScopeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchCorpDirRequest& dereference_from_shared_ptr(std::shared_ptr<SearchCorpDirRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchCorpDirRequest_H_
