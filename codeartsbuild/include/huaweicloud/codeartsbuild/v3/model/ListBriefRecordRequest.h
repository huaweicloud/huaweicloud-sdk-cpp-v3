
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListBriefRecordRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListBriefRecordRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListBriefRecordRequest
    : public ModelBase
{
public:
    ListBriefRecordRequest();
    virtual ~ListBriefRecordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBriefRecordRequest members

    /// <summary>
    /// 每页显示的条目数量，limit小于等于100
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// build_project_id，构建工程ID，36位UUID
    /// </summary>

    std::vector<std::string>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<std::string>& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::vector<std::string> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListBriefRecordRequest& dereference_from_shared_ptr(std::shared_ptr<ListBriefRecordRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListBriefRecordRequest_H_
