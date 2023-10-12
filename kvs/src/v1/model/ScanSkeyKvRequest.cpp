

#include "huaweicloud/kvs/v1/model/ScanSkeyKvRequest.h"
#include <huaweicloud/core/utils/Utils.h>
namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {




ScanSkeyKvRequest::ScanSkeyKvRequest()
{
    storeName_ = "";
    storeNameIsSet_ = false;
    bodyIsSet_ = false;
}

ScanSkeyKvRequest::~ScanSkeyKvRequest() = default;

void ScanSkeyKvRequest::validate()
{
}

bool ScanSkeyKvRequest::toBson(Builder &builder) const
{

    if (storeNameIsSet_ && !bson_append(builder, "store_name", storeName_)) {
        return false;
    }
    if (bodyIsSet_ && !bson_append(builder, "body", body_)) {
        return false;
    }

    return true;
}

bool ScanSkeyKvRequest::fromBson(const Viewer &viewer)
{

    Viewer::Iterator it = viewer.begin();
    while (it != viewer.end()) {
        const std::string &key = it->key();
        
        if (key == "store_name") {
            if (!bson_get(it, storeName_)) {
                return false;
            }
            storeNameIsSet_ = true;
            ++it;
            continue;
        }
        
        if (key == "body") {
            if (!bson_get(it, body_)) {
                return false;
            }
            bodyIsSet_ = true;
            ++it;
            continue;
        }
        
        ++it;
    }

    return true;
}

std::string ScanSkeyKvRequest::getStoreName() const
{
    return storeName_;
}

void ScanSkeyKvRequest::setStoreName(const std::string& value)
{
    storeName_ = value;
    storeNameIsSet_ = true;
}

bool ScanSkeyKvRequest::storeNameIsSet() const
{
    return storeNameIsSet_;
}

void ScanSkeyKvRequest::unsetstoreName()
{
    storeNameIsSet_ = false;
}

ScanSkeyKvRequestBody ScanSkeyKvRequest::getBody() const
{
    return body_;
}

void ScanSkeyKvRequest::setBody(const ScanSkeyKvRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ScanSkeyKvRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ScanSkeyKvRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


