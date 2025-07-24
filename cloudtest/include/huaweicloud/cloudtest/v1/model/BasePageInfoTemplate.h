
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BasePageInfoTemplate_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BasePageInfoTemplate_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/Template.h>
#include <vector>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BasePageInfoTemplate
    : public ModelBase
{
public:
    BasePageInfoTemplate();
    virtual ~BasePageInfoTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BasePageInfoTemplate members

    /// <summary>
    /// 总条数
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);

    /// <summary>
    /// 入参集合
    /// </summary>

    std::vector<Template>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<Template>& value);

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
    /// 总页数
    /// </summary>

    int32_t getPages() const;
    bool pagesIsSet() const;
    void unsetpages();
    void setPages(int32_t value);

    /// <summary>
    /// 每页条数
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    int64_t total_;
    bool totalIsSet_;
    std::vector<Template> list_;
    bool listIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t pages_;
    bool pagesIsSet_;
    int32_t size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BasePageInfoTemplate_H_
