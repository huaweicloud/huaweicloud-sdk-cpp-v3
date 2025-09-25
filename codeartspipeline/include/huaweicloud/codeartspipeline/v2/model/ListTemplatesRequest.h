
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListTemplatesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListTemplatesRequest_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ListTemplatesRequest
    : public ModelBase
{
public:
    ListTemplatesRequest();
    virtual ~ListTemplatesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTemplatesRequest members

    /// <summary>
    /// 模板类型
    /// </summary>

    std::string getTemplateType() const;
    bool templateTypeIsSet() const;
    void unsettemplateType();
    void setTemplateType(const std::string& value);

    /// <summary>
    /// 是否内置模板
    /// </summary>

    std::string getIsBuildIn() const;
    bool isBuildInIsSet() const;
    void unsetisBuildIn();
    void setIsBuildIn(const std::string& value);

    /// <summary>
    /// 偏移量,表示从此偏移量开始查询,offset大于等于0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条目数量
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 模板名称，匹配规则为模糊匹配
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 排序字段
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);

    /// <summary>
    /// 是否正序
    /// </summary>

    std::string getAsc() const;
    bool ascIsSet() const;
    void unsetasc();
    void setAsc(const std::string& value);


protected:
    std::string templateType_;
    bool templateTypeIsSet_;
    std::string isBuildIn_;
    bool isBuildInIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string sort_;
    bool sortIsSet_;
    std::string asc_;
    bool ascIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTemplatesRequest& dereference_from_shared_ptr(std::shared_ptr<ListTemplatesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListTemplatesRequest_H_
