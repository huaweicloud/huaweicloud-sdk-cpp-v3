
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListOffSiteInstancesRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListOffSiteInstancesRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListOffSiteInstancesRequest
    : public ModelBase
{
public:
    ListOffSiteInstancesRequest();
    virtual ~ListOffSiteInstancesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOffSiteInstancesRequest members

    /// <summary>
    /// 语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。
    /// </summary>

    Object getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const Object& value);

    /// <summary>
    /// 查询记录数。默认为100，不能为负数，最小值为1，最大值为100。
    /// </summary>

    Object getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const Object& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    Object offset_;
    bool offsetIsSet_;
    Object limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListOffSiteInstancesRequest& dereference_from_shared_ptr(std::shared_ptr<ListOffSiteInstancesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListOffSiteInstancesRequest_H_
