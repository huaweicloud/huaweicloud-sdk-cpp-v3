
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssueListPiFilterInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssueListPiFilterInfo_H_


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
/// pi过滤条件
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  IssueListPiFilterInfo
    : public ModelBase
{
public:
    IssueListPiFilterInfo();
    virtual ~IssueListPiFilterInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueListPiFilterInfo members

    /// <summary>
    /// 迭代列表
    /// </summary>

    std::vector<std::string>& getSprints();
    bool sprintsIsSet() const;
    void unsetsprints();
    void setSprints(const std::vector<std::string>& value);

    /// <summary>
    /// pi的id，层级关系：pi -&gt; 迭代 -&gt; 需求
    /// </summary>

    std::string getPiId() const;
    bool piIdIsSet() const;
    void unsetpiId();
    void setPiId(const std::string& value);


protected:
    std::vector<std::string> sprints_;
    bool sprintsIsSet_;
    std::string piId_;
    bool piIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IssueListPiFilterInfo_H_
