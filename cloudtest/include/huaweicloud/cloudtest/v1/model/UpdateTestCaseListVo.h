
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateTestCaseListVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateTestCaseListVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  UpdateTestCaseListVo
    : public ModelBase
{
public:
    UpdateTestCaseListVo();
    virtual ~UpdateTestCaseListVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTestCaseListVo members

    /// <summary>
    /// CTS需要返回资源id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// CTS需要返回资源name
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 成功批量更新用例的id列表
    /// </summary>

    std::vector<std::string>& getSuccessList();
    bool successListIsSet() const;
    void unsetsuccessList();
    void setSuccessList(const std::vector<std::string>& value);

    /// <summary>
    /// 没有批量更新用例的id列表
    /// </summary>

    std::vector<std::string>& getFailedList();
    bool failedListIsSet() const;
    void unsetfailedList();
    void setFailedList(const std::vector<std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> successList_;
    bool successListIsSet_;
    std::vector<std::string> failedList_;
    bool failedListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateTestCaseListVo_H_
