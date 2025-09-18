
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueStatuesResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueStatuesResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IPDStatusVO.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIssueStatuesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListIssueStatuesResponse();
    virtual ~ListIssueStatuesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIssueStatuesResponse members

    /// <summary>
    /// 查询结果总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 查询结果
    /// </summary>

    std::vector<IPDStatusVO>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<IPDStatusVO>& value);

    /// <summary>
    /// 状态码
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 响应信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<IPDStatusVO> result_;
    bool resultIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string message_;
    bool messageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueStatuesResponse_H_
