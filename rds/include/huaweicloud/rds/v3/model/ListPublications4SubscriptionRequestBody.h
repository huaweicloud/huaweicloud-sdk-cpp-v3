
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPublications4SubscriptionRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPublications4SubscriptionRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 可选的rds实例列表及其发布。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListPublications4SubscriptionRequestBody
    : public ModelBase
{
public:
    ListPublications4SubscriptionRequestBody();
    virtual ~ListPublications4SubscriptionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPublications4SubscriptionRequestBody members

    /// <summary>
    /// 发布实例id。若不为空，优先查该实例下的发布。
    /// </summary>

    std::string getPublicationInstanceId() const;
    bool publicationInstanceIdIsSet() const;
    void unsetpublicationInstanceId();
    void setPublicationInstanceId(const std::string& value);

    /// <summary>
    /// 发布实例名称（模糊匹配）。
    /// </summary>

    std::string getPublicationInstanceName() const;
    bool publicationInstanceNameIsSet() const;
    void unsetpublicationInstanceName();
    void setPublicationInstanceName(const std::string& value);

    /// <summary>
    /// 发布名称（模糊匹配）。
    /// </summary>

    std::string getPublicationName() const;
    bool publicationNameIsSet() const;
    void unsetpublicationName();
    void setPublicationName(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询记录数。默认为10，不能为负数，最小值为1，最大值为1000。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string publicationInstanceId_;
    bool publicationInstanceIdIsSet_;
    std::string publicationInstanceName_;
    bool publicationInstanceNameIsSet_;
    std::string publicationName_;
    bool publicationNameIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPublications4SubscriptionRequestBody_H_
