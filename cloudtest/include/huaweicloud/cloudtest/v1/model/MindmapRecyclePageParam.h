
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MindmapRecyclePageParam_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MindmapRecyclePageParam_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  MindmapRecyclePageParam
    : public ModelBase
{
public:
    MindmapRecyclePageParam();
    virtual ~MindmapRecyclePageParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MindmapRecyclePageParam members

    /// <summary>
    /// 创建人工号
    /// </summary>

    std::string getCreatorNum() const;
    bool creatorNumIsSet() const;
    void unsetcreatorNum();
    void setCreatorNum(const std::string& value);

    /// <summary>
    /// 每页显示的条目数量，最大支持200条
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 起始偏移量，表示从此偏移量开始查询，offset大于等于0，小于等于100000
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 过滤用字段
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);


protected:
    std::string creatorNum_;
    bool creatorNumIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string text_;
    bool textIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MindmapRecyclePageParam_H_
